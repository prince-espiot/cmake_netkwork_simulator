#include "simulator.hpp"


void Simulator::AddNode(Node* node) {
    nodes_.push_back(node);
}

std::list<Node*> Simulator::GetNodes() {
    return nodes_;
}