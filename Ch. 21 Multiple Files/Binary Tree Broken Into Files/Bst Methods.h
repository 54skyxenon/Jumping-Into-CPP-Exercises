#ifndef BST_METHODS_H
#define BST_METHODS_H

contact* add(contact* book, string name, string email);
contact* lookUp(contact* book, string name);
contact* findReplacement(contact* book);
contact* removeReplacement(contact* book, contact* promotedContact);
contact* deleteContact(contact* book, string name);
void update(contact* book);
void displayContacts(contact* book);
void displayOptions(contact* book);
void eraseBook(contact* book);
int countContacts(contact* p_tree);

#endif // BST_METHODS_H
