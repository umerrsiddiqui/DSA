
#include <iostream>
using namespace std;
const int max_size = 10;
class listAsAST
{
  private:
  int arr[max_size];
  int size;
  public:
  listAsAST()
  {
      size =0;
  }
  bool isEmpty()
  {
      return size==0;
  }
  bool isFull()
  {
      return size == max_size;
  }
  void insert(int value, int index)
  {
      if(index <0 || index>size)
      {
          cout<<"please enter a valid index"<<endl;
      }
      else if(isFull())
      {
          cout<<"your list is already full"<<endl;
      }
      else
      {
          for(int i = size; i>index; i--)
          {
              arr[i] = arr[i-1];
          }
          arr[index] = value;
          size++;
      }
  }
  void removeAnItem(int index)
  {
      if(index <0 || index>size)
      {
          cout<<"please enter a valid index"<<endl;
      }
      else if(isEmpty())
      {
          cout<<"Already empty"<<endl;
      }
      else
      {
          for(int i = index; i<size-1; i++)
          {
              arr[i] = arr[i+1];
          }
          size--;
      }
      
  }
  void traverse()
  {
      for (int i =0; i<size; i++)
      {
          cout<<arr[i]<<",";
      }
      cout<<endl;
  }
  void replace(int item, int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index"<<endl;
            return;
        }
        else if(isEmpty())
        {
             cout << "List is Empty"<<endl;
             return;
        }
        arr[index] = item;
    }

    int retrieve(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index"<<endl;
            return -1;
        }
        else if(isEmpty())
        {
             cout << "List is Empty"<<endl;
             return -1;
        }
        return arr[index];
    }

    int search(int item) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == item) {
                return i; 
            }
        }
        return -1; 
    }

};
int main()
{
    listAsAST list;
    list.insert(10,0);
    list.insert(20,1);
    list.insert(15,1);
    list.traverse();
    list.removeAnItem(0);
    list.replace(100,0);
    cout<<list.retrieve(1)<<endl;
    cout<<list.search(100)<<endl;
    list.traverse();

    return 0;
}
