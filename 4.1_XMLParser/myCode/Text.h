/*
 * Text.h
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#ifndef TEXT_H_
#define TEXT_H_

#include <string>
#include "Node.h"

class Text : public Node
{
private:
	std::string m_text;

public:
	Text();
	std::string getText() const;
	void setText(std::string text);
	bool parseInput(const std::string& input, unsigned int& parsePosition);
	void print(int indent) const;
	Node::node_t getNodeType() const;
};

#endif /* TEXT_H_ */
