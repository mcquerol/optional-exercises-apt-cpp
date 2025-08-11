/*
 * Element.cpp
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#include "Element.h"

Element::Element() : Node{Node::node_t::ELEMENT} , m_contentNodes{0}, m_tag{"<"}
{

	for(int i = 0; i < 10; i++)
	{
		m_content[i] = nullptr;
	}

}

Element::~Element()
{
	for(int i = 0; i < m_contentNodes; i++)
	{
		delete m_content[i];
	}
}

bool Element::addToContent(Node *child)
{
	return false; //dummy return
	//TODO implment method
}

bool Element::parseStartOrEndTag(const std::string &input, unsigned int &parsePosition, bool &isStartTag, std::string &tag)
{
	return false; //dummy return
	//TODO implement method
}


bool Element::parseInput(const std::string &input, unsigned int &parsePosition)
{
	return false; //dummy return
	//TODO implement method
}

Node::node_t Element::getNodeType() const
{
	return Node::getNodeType();
}
