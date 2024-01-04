#include <iostream>

template<typename T>
class DynamicArray
{
    size_t  m_size;
    T *   m_arr;
    
public:

    DynamicArray(size_t size)
        : m_size(size)
        , m_arr(new T[size])
    {
        std::cout << "Array constructor\n";
    }
    
    ~DynamicArray()
    {
        delete [] m_arr;
        std::cout << "Array Descructor\n";
    }
    
    T get(size_t index) const
    {
        return m_arr[index];
    }

    void print() const
    {
        for(size_t i=0; i<m_size; i++)
        {
            std::cout << i << " " << m_arr[i] << "\n";
        }
    }
    
    const T & operator[] (size_t index) const
    {
        return m_arr[index];
    }
    
    T & operator[] (size_t index)
    {
        return m_arr[index];
    }

};

int main(int argc, char * argv[]) 
{
    DynamicArray<float> myArray(10);
    
    myArray[2] = 8.128;
    myArray[9] = 2483.128;

    myArray.print();
    
    return 0;
}