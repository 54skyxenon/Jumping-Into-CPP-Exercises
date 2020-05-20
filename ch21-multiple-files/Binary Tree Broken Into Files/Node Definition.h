#ifndef NODE_DEFINTION_H
#define NODE_DEFINTION_H

struct contact
{
    string name;
    string email;
    contact* next;
    contact* previous;
};

#endif // NODE_DEFINTION_H
