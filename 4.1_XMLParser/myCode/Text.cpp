/*
 * Text.cpp
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#include "Text.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Text::Text() : Node(Node::node_t::TEXT)
{
}

std::string Text::getText() const
{
	return m_text;
}

void Text::setText(std::string text)
{
	m_text = text;
}

bool Text::parseInput(const std::string &input, unsigned int &parsePosition)
{
	if (input.find('<', parsePosition) == std::string::npos)
	{
		return false;
	}

	istringstream stream(input.substr(parsePosition));
	getline(stream, m_text, '<');

	parsePosition += m_text.length() + 1;

	return true;
}

void Text::print(int indent) const
{
	//TODO implement this method
}

Node::node_t Text::getNodeType() const
{
	return Node::getNodeType();
}
