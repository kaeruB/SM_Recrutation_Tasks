#include <iostream>
#include <vector>
using namespace std;

//I iplemented a list to add elements to C sequence but it could be a vector


bool isPrimeNumber (int p){
    if (p < 2)
        return false;

    for (int j = 2; j * j <= p; j++){
        if (p % j == 0)
            return false;
    }
    return true;
}

struct node {
    int data;
    node *next;
};

void showList (node *p){
    if (p == NULL) cout << "Empty list.";
    else {
        while (p->next != NULL){
            cout << p->data << " : ";
            p = p->next;
        }
        cout << p->data;
    }
    cout << endl;
}

void addOnEnd (int n, node* &first){
    node* p = first;
    node* tmp;
    tmp = new node;
    tmp->data = n;
    tmp->next = NULL;
    if (p != NULL){
        while (p->next != NULL)
            p = p->next;
        p->next = tmp;
    }
    else
        first = tmp;
}

void deleteList(node* &p){
    node *tmp;
    while (p->next != NULL){
        tmp = p->next;
        delete p;
        p = NULL;
        p = tmp;
    }
    delete p;
    p = NULL;
}


int coutTheNumberOfOccurances(vector<int> B, int number){
    int count = 0;
    for (int i = 0; i < B.size(); i++){
            if (B[i] == number)
                count++;
    }
    return count;
}


/*
    1. couting the number of occurence of a number from sequence A in sequence B
    2. checking if the counted number is prime
    3. if it's not then adding the number from sequence to C sequence
    4. returning the pointer to the C sequence
*/
node* generateSequenceC(vector<int> A, vector<int> B){
    node* C;
    C = NULL;

    for (int i = 0; i < A.size(); i++){
        int numberOfOccurances = 0;
        numberOfOccurances = coutTheNumberOfOccurances(B, A[i]);

        if (isPrimeNumber(numberOfOccurances) == false)
            addOnEnd(A[i], C);
    }
    return C;
}



int main()
{
    int A [] = {2,3,9,2,5,1,3,7,10};
    vector<int> vectorA (A, A + sizeof(A) / sizeof(int));
    cout << "A: ";

    for (vector<int>::iterator it = vectorA.begin(); it != vectorA.end(); it++)
        cout << ' ' << *it;
    std::cout << '\n';


    int B [] = {2,1,3,4,3,10,6,6,1,7,10,10,10};
    vector<int> vectorB (B, B + sizeof(B) / sizeof(int));

    cout << "\nB: ";
    for (vector<int>::iterator it = vectorB.begin(); it != vectorB.end(); it++)
        cout << ' ' << *it;
    std::cout << '\n';

    node* C;
    C = generateSequenceC(vectorA, vectorB);
    cout << "\nC: ";
    showList(C);

    deleteList(C);
    cout << "\nReleasing the allocated memory.\n";
    showList(C);

    return 0;
}
