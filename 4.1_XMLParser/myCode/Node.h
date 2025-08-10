/*
 * Node.h
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#ifndef NODE_H_
#define NODE_H_

class Node
{

public:
	enum node_t
	{
		ELEMENT,
		TEXT
	};

private:
	node_t m_node;

public:
	node_t getNodeType() const;
	Node(node_t nodeType);
};

#endif /* NODE_H_ */
