/*
 * Text.cpp
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#include "Text.h"

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
	return false; //dummy return
	//TODO implement this method
}

void Text::print(int indent) const
{
	//TODO implement this method
}

Node::node_t Text::getNodeType() const
{
	return Node::getNodeType();
}
