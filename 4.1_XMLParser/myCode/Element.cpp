/*
 * Element.cpp
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#include "Element.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Element::Element() : Node{Node::node_t::ELEMENT} , m_contentNodes{0}, m_tag{""}
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
	if(m_contentNodes == 10)
	{
		return false;
	}

	m_content[m_contentNodes] = child;
	m_contentNodes++;

	return true;
}

bool Element::parseStartOrEndTag(const std::string &input, unsigned int &parsePosition, bool &isStartTag, std::string &tag)
{

	if(input.find("<", parsePosition) == std::string::npos || input.find(">", parsePosition) == std::string::npos)
	{
		return false; //return false if < or > is not found
	}

	auto startTagPos = input.find("<");
	auto endTagPos = input.find(">");
	isStartTag = (input[startTagPos + 1] == '/') ? false : true;

	auto tagStart = startTagPos + (isStartTag ? 1 : 2);
	auto tagLength = endTagPos - tagStart;
	tag = input.substr(tagStart, tagLength);
	m_tag = tag;
	parsePosition = endTagPos + 1;

	return true;
}


bool Element::parseInput(const std::string &input, unsigned int &parsePosition)
{
	return false; //dummy return
	//TODO implement method
}

void Element::print(int indent) const
{
	for(int i = 0; i < indent + 2; i++) // 2 extra spaces for element print method
	{
		cout << " ";
	}
	cout << "tag=\"" << m_tag << "\"" << endl;
}

Node::node_t Element::getNodeType() const
{
	return Node::getNodeType();
}
