#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

template <typename T>
class Heap
{
public:
    enum Type {
        MAX_HEAP, MIN_HEAP
    };

private:
    T *elements;
    int capacity;
    int n;
    Type type;

public:
    Heap(T *elements, int n, Type type=MAX_HEAP) : elements(elements), n(n), type(type)
    {
        // TODO
        throw ("Function not implemented");
    }

    Heap(int capacity, Type type=MAX_HEAP) : capacity(capacity), type(type)
    {
        // TODO
        throw ("Function not implemented");
    }

    ~Heap(){ 
        // TODO  
        throw ("Function not implemented");          
    }

    void buildFromArray(T *elements, int n){
        // TODO
        throw ("Function not implemented");
    }

    int size()
    {
        // TODO
        throw ("Function not implemented");
    }

    bool is_empty()
    {
         // TODO
        throw ("Function not implemented");
    }

    void push(T value)
    {
         // TODO
        throw ("Function not implemented");
    }

    T pop()
    {
        // TODO
        throw ("Function not implemented");
    }

    T top()
    {
        // TODO
        throw ("Function not implemented");
    }

    vector<T> extractTheTopK(int k){
        // TODO
        throw ("Function not implemented"); 
    }

    static void sortAsc(T* arr, int n){
       // TODO
       throw ("Function not implemented"); 
    }

    static void sortDesc(T* arr, int n){
       // TODO
       throw ("Function not implemented"); 
    }

private:
    int Parent(int i)
    {
        return (i - 1) / 2;
    }

    int Left(int i)
    {
        return (2 * i + 1);
    }

    int Right(int i)
    {
        return (2 * i + 2);
    }

    void heapify_down(int i)
    {
       // TODO
       throw ("Function not implemented"); 
    }

    void heapify_up(int i)
    { 
        // TODO
       throw ("Function not implemented"); 
    }
};