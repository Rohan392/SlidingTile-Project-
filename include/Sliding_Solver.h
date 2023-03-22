#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include "../include/Board_Tile.h"
using namespace std;

//template<typename Comparable>

/*class MinHeap {
 public:
 MinHeap(): array(101), size{0} {}
 MinHeap(int count);
 MinHeap(const vector<Comparable> &items);
 ~MinHeap();
 void insert(const Comparable &x);
 Comparable findMin();
 void deleteMin(Comparable &minItem);
 bool isEmpty();
 void makeEmpty();

 private:
 int size;
 vector<Comparable> array;
 void buildHeap();
 void percolateDown(int hole);
 };
 */
//template<typename Comparable>
class BinaryHeap {
public:
	BinaryHeap() :
			currentSize { 0 } {
	}
/*
	BinaryHeap(const vector<BoardTile> &items) :
			currentSize { items.size() } {
		for (int i = 0; i < items.size(); ++i)
			array[i + 1] = items[i];
		buildHeap();
	}
*/
	bool isEmpty() const {
		return currentSize == 0;
	}

	/**
	 * Find the smallest item in the priority queue.
	 * Return the smallest item, or throw Underflow if empty.
	 */
	const BoardTile& findMin() const {
		if (isEmpty())
			cout << "The Heap is empty, we cant find min";
		return array[1];
	}

	/**
	 * Insert item x, allowing duplicates.
	 */
/*	void insert(const Comparable &x) {
		if (currentSize == array.size() - 1)
			array.resize(array.size() * 2);

		// Percolate up
		int hole = ++currentSize;
		Comparable copy = x;

		array[0] = std::move(copy);
		for (; x < array[hole / 2]; hole /= 2)
			array[hole] = std::move(array[hole / 2]);
		array[hole] = std::move(array[0]);
	}*/

	/**
	 * Insert item x, allowing duplicates.
	 */
/*	void insert(Comparable &&x) {
		if (currentSize == array.size() - 1)
			array.resize(array.size() * 2);

		// Percolate up
		int hole = ++currentSize;
		for (; hole > 1 && x < array[hole / 2]; hole /= 2)
			array[hole] = std::move(array[hole / 2]);
		array[hole] = std::move(x);
	}
*/
	/**
	 * Remove the minimum item.
	 * Throws UnderflowException if empty.
	 */
/*	void deleteMin() {
		if (isEmpty())
			cout << "The Heap is empty, we cant delete min";

		array[1] = std::move(array[currentSize--]);
		percolateDown(1);
	}
*/
	/**
	 * Remove the minimum item and place it in minItem.
	 * Throws Underflow if empty.
	 */
/*	void deleteMin(Comparable &minItem) {
		if (isEmpty())
			cout << "The Heap is empty, we cant delete min";

		minItem = std::move(array[1]);
		array[1] = std::move(array[currentSize--]);
		percolateDown(1);
	}

	void makeEmpty() {
		currentSize = 0;
	}
*/
private:
	int currentSize;  // Number of elements in heap
	vector<BoardTile> array;        // The heap array

	/**
	 * Establish heap order property from an arbitrary
	 * arrangement of items. Runs in linear time.
	 */
/*	void buildHeap() {
		for (int i = currentSize / 2; i > 0; --i)
			percolateDown(i);
	}
*/
	/**
	 * Internal method to percolate down in the heap.
	 * hole is the index at which the percolate begins.
	 */
	void percolateDown(int hole) {
		int child;
		BoardTile tmp = std::move(array[hole]);

		for (; hole * 2 <= currentSize; hole = child) {
			child = hole * 2;
			if (child != currentSize && array[child + 1] < array[child])
				++child;
			if (array[child] < tmp)
				array[hole] = std::move(array[child]);
			else
				break;
		}
		array[hole] = std::move(tmp);
	}
};


class SlidingSolver {
public:
	SlidingSolver(string startConfig, string endConfig);
	void solvePuzzle();

private:
  //bool shmall(BoardTile &a, BoardTile &b);
  vector<BoardTile> previousPlaces;
	BinaryHeap tileQueue;
  void makeSorted();
  int hasBeen(vector<BoardTile> &Tiles, BoardTile a);
};

