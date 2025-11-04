#include<iostream>
#include<vector>

using namespace std;

// void display(vector<int> &v){
//     for (int i = 0; i < v.size(); i++) // size() --> returns the number of elements
//     {
//         cout<<v.at(i)<< " "; // is same as cout<<v[i]<< " ";
//     }
//     cout<<endl;
// }
template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++) // size() --> returns the number of elements
    {
        cout<<v.at(i)<< " "; // is same as cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main(){
    // Ways-1 to create a vector
    vector <int> vec1; // zero length integer vector

    // User Input
    // int element, size = 5;
    // cout<<"Enter the size of your vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec1.push_back(element); // adds an element to the end
    // }

    // vec1.pop_back(); // Removes the last element

    // display(vec1);
    // vector <int> :: iterator iter = vec1.begin(); // declares an iterator named iter for a vector of integers and initializes it to point to the first element of a vector named vec1

    // vec1.insert(iter+1, 566); //inserts elements to position where iterator is pointed
    // // vec1.insert(iter+1, 5, 566); //inserts 5 elements to position where iterator is pointed
    // display(vec1);

    // Ways-2 to create a vector
    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('5');
    // display(vec2);

    // Ways-3 to create a vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    // display(vec3);

    // Ways-4 to create a vector
    vector<int> vec4(4, 13); // 4- element vector of 13s
    display(vec4);
    cout<<"The size of vec4: "<<vec4.size();
    
    
    return 0;
}