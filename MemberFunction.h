#include <iostream>
using namespace std;

struct Data{
    int angka;
    Data *next;
};

Data *head = NULL, *tail = NULL;

void display(Data *);

void insertAtFront(int n){
    Data *data = new Data;
    if (head == NULL){
        data->angka = n;
        data->next = NULL;
        head = data;
        tail = data;
    } else {
        Data *temp = head;
        data->angka = n;
        data->next = temp;
        head = data;
    }
    display(head);
}

void insertAtBack(int n){
    Data *data = new Data;
    if (head == NULL){
        data->angka = n;
        data->next = NULL;
        head = data;
        tail = data;
    } else {
        data->angka = n;
        data->next = NULL;
        tail->next = data;
        tail = data;
    }
    display(head);
}

void removeFromFront(){
    if(head == NULL){
        cout << "List is NULL" << endl;
    } else if (head->angka == tail->angka){
        head = NULL;
        tail = NULL;
        display(head);
    } else {
        head = head->next;
        display(head);
    }
}

void removeFromBack(){
    if(head == NULL){
        cout << "List is NULL" << endl;
    } else if (head->angka == tail->angka){
        head = NULL;
        tail = NULL;
        display(head);
    } else {
        Data *current = head;
        while(current->next != tail){
            current = current->next;
        }
        tail = current;
        tail->next = NULL;
        display(head);
    }
}

void display(Data *head){
    if (head == NULL){
        cout << "END" << endl << endl;
    } else {
        cout << head->angka << endl;
        display(head->next);
    }
}
