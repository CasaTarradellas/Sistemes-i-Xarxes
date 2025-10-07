#pragma once
#include <vector>
#include <functional>
#include <list>
#include <mutex>
#include "Node.h"

class NodeMap
{
public:
	typedef std::vector<Node*>Nodevolumn;
	typedef std::vector <Node*> NodeColumn;

	typedef std::function<void(Node* node)> SafePick;
	typedef std::function<void(std::list<Node*> nodes)> SafeMultipick;

public:
	NodeMap(Vector2 size, Vector2 offset);

	Vector2 GetSize();

	void UnSafeDraw();
	void SafePickNode(Vector2 position, SafePick safePickAction);
	void SafeMultiPickNode(std::list<Vector2> positions, SafeMultipick safeMultiPickAction);

private:
	Vector2 _offset;

	Vector2 _size;
	std::mutex _sizeMutex;

	Vector2 _grid;
	std::mutex _gridMutex;

	std::mutex __safeMultiPickNodeLockMutex;

	Node* UnsafeGetNode(Vector2 position);
};

