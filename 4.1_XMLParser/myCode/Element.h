/*
 * Element.h
 *
 *  Created on: 10 Aug 2025
 *      Author: mateo
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

#include "Node.h"

#include <string>

class Element : public Node
{

private:
	Node* m_content[10];
	int m_contentNodes;
	std::string m_tag;

	bool addToContent(Node* child);
	bool parseStartOrEndTag(const std::string& input, unsigned int& parsePosition, bool& isStartTag, std::string& tag);

public:

	Element();
	~Element();
	bool parseInput(const std::string& input, unsigned int& parsePosition);
	Node::node_t getNodeType() const;
};

#endif /* ELEMENT_H_ */
