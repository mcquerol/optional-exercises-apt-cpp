/*
 * Node.cpp
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#include "Node.h"


Node::Node(node_t nodeType) : m_node{nodeType}
{
}

Node::node_t Node::getNodeType() const
{
	return m_node;
}
