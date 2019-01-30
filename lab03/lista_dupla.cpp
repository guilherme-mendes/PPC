#include <bits/stdc++.h>
#include "lista_dupla.hpp"

using namespace std;

DoubleLinkedList::DoubleLinkedList()
{
    // Constroi o estado inicial da lista
    tail = head = NULL;
}

void DoubleLinkedList::push_back(int element)
{
    // Adiciona um novo nó ao fim da lista
    // Complexidade: O(1)

    Node2 * new_node = new Node2;
    new_node->value = element;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (!head) tail = head = new_node;
    else
    {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

void DoubleLinkedList::pop_back()
{
    // Remove o ultimo nó da lista
    // Complexidade: O(1)

    if (head && head == tail)
    {
        delete tail;
        head = tail = NULL;
    }
    else if (head)
    {
        Node2 * old_tail = tail;

        tail->prev->next = NULL;
        tail = tail->prev;

        delete old_tail;
    }
}

void DoubleLinkedList::push_front(int element)
{
    // Adiciona um novo nó no inicio da lista
    // Complexidade: O(1)

    Node2 * new_node = new Node2;
    new_node->value = element;
    new_node->next = NULL;
    new_node->prev = NULL;

    if (!head) tail = head = new_node;
    else
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void DoubleLinkedList::pop_front()
{
    // Remove o primeiro nó da lista
    // Complexidade: O(1)

    if (head)
    {
        Node2 * node = head->next;
        delete head;
        head = node;

        if (head) head->prev = NULL;
    }

    if (!head) tail = NULL;
}

void DoubleLinkedList::insert(int element, unsigned int index)
{
    // Adiciona um novo nó no indice index da lista
    // Complexidade: O(n)

    if (index > size()) return;

    if (index == 0) push_front(element);
    else if (index == size()) push_back(element);
    else
    {
        Node2 * new_node = new Node2;
        new_node->value = element;
        new_node->next = NULL;
        new_node->prev = NULL;

        int i = 0;
        for(Node2 * node = head, *last_node = NULL; node; node = node->next, i++)
        {
            if (i == index)
            {
                new_node->next = node;
                new_node->prev = last_node;

                last_node->next = new_node;
                node->prev = new_node;
                return;
            }

            last_node = node;
        }
    }
}

void DoubleLinkedList::erase(unsigned int index)
{
    // Remove o nó de indice index da lista
    // Complexidade: O(n)

    if (index >= size()) return;

    if (index == 0) pop_front();
    else if (index == size() - 1) pop_back();
    else
    {
        int i = 0;
        for(Node2 * node = head, *last_node = NULL; node; node = node->next, i++)
        {
            if (i == index)
            {
                last_node->next = node->next;
                if (node->next) node->next->prev = last_node;

                delete node;
                return;
            }

            last_node = node;
        }
    }
}

int DoubleLinkedList::front()
{
    // Retorna o valor do primeiro nó
    // Complexidade: O(1)

    if (head) return head->value;
    return -1;
}

int DoubleLinkedList::back()
{
    // Retorna o valor do útlimo nó
    // Complexidade: O(1)

    if (tail) return tail->value;
    return -1;
}

void DoubleLinkedList::clear()
{
    // Remove todos os nós da lista
    // Complexidade: O(n)

    while(head) pop_front();
}

bool DoubleLinkedList::find(int element)
{
    // Procura se existe um nó cujo o valor seja igual ao de element
    // Complexidade: O(n)

    for(Node2 * node = head; node; node = node->next)
        if (element == node->value) return true;

    return false;
}

unsigned int DoubleLinkedList::size()
{
    // Retorna o número de nós que existem na lista
    // Complexidade: O(n)

    if (head)
    {
        unsigned int len = 0;
        for(Node2 * node = head; node; node = node->next, len++);
        return len;
    }

    return 0;
}

bool DoubleLinkedList::empty()
{
    // Retorna se a lista está vazia ou não
    // Complexidade: O(n)

    return size() == 0;
}

void DoubleLinkedList::print()
{
    Node2 * node = head;

    cout << "--List Begin [" << head << "]-- Size = " << size() << "\n";

    while(node)
    {
        cout << "(";

        cout << node->prev;
        if (node->prev) cout << " [" << node->prev->value << "]";

        cout << ", " << node->value << ", ";

        cout << node->next;
        if (node->next) cout << " [" << node->next->value << "]";

        cout << ")\n";

        node = node->next;
    }

    cout << "--List End [" << tail << "]--\n\n";
}
