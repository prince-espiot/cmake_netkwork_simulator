#pragma once
#include <list>
#include "node.hpp"


/* class Simulator
 * Description:
 * ------------
 * The Simulator is a class that stores pointers of all the network elements
 * in different list containers. The class allows basic
 * manipulation of these network elements through the functions described
 * below.
 *
 * Functions:
 * -----------
 * The Simulator class has a parameterless constructor that default constructs
 * the members.
 *
 * The destructor of the Simulator class deletes all the network elements in the
 * from their lists.
 * 
 * CreateNode: the function creates a network node, allocates IP Address,
 * sets node type, and returns the created Node.
 * 
 * AddNode: Adds the given node to the node list of the simulator.
 * If the pointer is NULL, std::logic_error is thrown.
 * Returns: Nothing
 *
 * GetNodes: the function returns a const reference to the Node's
 * list of Node pointers. The function takes no parameters and does not change 
 * the Node's state, i.e. the function should be const.
 *
 *
 * Other:
 * -----------
 * The class obviously has a lists of all nework elements pointers as a private member.
 * This class is not copyable (also means not assignable), so copy and assignment 
 * operations for this class is prevented.
 */

class Simulator {
    public:
        Simulator(){}

        /* method CreateNode
        * Arguments: A pointer to Node.
        * Description: With new keyword, creates a 
        * network node, allocates IP Address, and 
        * sets node type
        * Returns: Returns the created Node
        */
        Node* CreateNode();

        /* method AddNode
        * Arguments: A pointer to node.
        * Description: Adds the given node to the simulator.
        *  If the pointer is NULL, std::logic_error is thrown.
        * Returns: Nothing
        * 
        * When a node is added to the simulator, it's ownership
        * is transferred. When the simulator is destroyed, all
        * the nodes are destroyed too.
        */
        void AddNode(Node* node);

        std::list<Node*> GetNodes();
        

    private:
        // Disallow copying
        Simulator(const Simulator&){}
        Simulator& operator=(const Simulator&) {
            return *this;
        };
        // Holds all the nodes created in the network
        std::list<Node*> nodes_;

};