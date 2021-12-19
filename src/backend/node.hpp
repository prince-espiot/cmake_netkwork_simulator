#pragma once
#include <string>

class Node {
public:

    // Network Nodes derive from this class
    virtual ~Node() {}

    
    // Returns node type
    std::string GetType() const;
  
private:
    std::string type_;
};
