#include <bits/stdc++.h>
#include "lista_circular.hpp"

using namespace std;

CircularList::CircularList()
{
    // Constroi o estado inicial da lista
    head = NULL;
    tail = NULL;
}

void CircularList::push(int element)
{
    auto n = new Node3();

    n->value = element;
    n->next = NULL;
    n->prev = NULL;

    if(!head){ //lista vazia
        head = n;
        tail = n;
        head->next = head; //aponta para ele mesmo
        head->prev = head;
    }else if(head == tail){
        head->next = n;
        tail = n;
        n->next = head;
        n->prev = head;
        head->prev = n;
    }else{
        n->prev = head;
        n->next = head->next;
        head->next = n;
        head->next->prev = n;
    }

}

void CircularList::pop()
{
    if(!head){
        return;
    }else if(head == tail){
        delete(head);
        head = nullptr;
        tail = nullptr;
    }else{
        if(head->next == tail){ // 2 elementos
            delete(head->next);
            tail = head;
            head->next = tail;
            head->prev = tail;
        }else{
            auto temp = head->next;
            head->next->next->prev = head;
            head->next = head->next->next;
            delete(temp);
        }
    }
}

void CircularList::clear()
{
    auto temp = size();
    for(int i = 0; i < temp; i++){
        pop();
    }
}

bool CircularList::find(int element)
{
    auto temp = head;
    int temp2 = size();
    for(int i = 0; i < temp2; i++){
        if(temp->value == element){
            return true;
        }
        temp = temp->next;

    }
    return false;
}

unsigned int CircularList::size()
{
    int tamanho = 0;
    Node3 * aux = head;

    do{
        if(!head) break;

        tamanho++;
        aux = aux->next;

    }while(aux != head);

    return tamanho;
}

bool CircularList::empty()
{
    return head == nullptr;
}

void CircularList::print()
{
    Node3 * node = head;

    cout << "--List Begin [" << head << "]-- Size = " << size() << endl;

    do {
        if (!head) break;

        cout << "(";

        cout << node->value << ", ";

        cout << node->next;
        if (node->next) cout << " [" << node->next->value << "]";

        cout << ")\n";

        node = node->next;
    } while(node != head);

    cout << "--List End--\n\n";
}
