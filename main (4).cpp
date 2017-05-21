
#include <iostream>


using namespace std;

 struct patient
    {
        int number ;
        float age ;
        char name[30] ;
        string drugs[100];

    };

void print_patient_data(patient);
int number ;
class Node
{
    private:
   patient p1 ;
    Node* left ;
    Node* right ;

    public:
    void setData(patient c ){p1 = c;}
    void setNum (int N) {p1.number = N ;}
    void setLeft(Node* L){left  = L;}
    void setRight(Node* R){right  = R;}
    patient getData(){return p1 ; }
    int getNum(){return p1.number ;}
     Node* getRight(){return right;}
     Node* getLeft(){return left;}

};
class BST
{
private:
    Node*root ;
public:
    Node* getRoot(){return root ;}
    BST(){root = NULL;}
    Node* temp ;
Node* Insertion(Node *temp,patient p1)
 {
     Node* newNode = new Node();
     newNode->setData(p1);
     newNode->setRight(NULL);
     newNode->setLeft(NULL);
     if(root == NULL)
      {
         root = newNode  ;


      }
      else if( number <= temp->getNum())
		temp->setLeft(Insertion(temp->getLeft()),number);
	  else
		temp->setRight( Insertion(temp->getRight(),number));
     return root;


    }
    Node* Delete(Node *temp, int number)
    {
	if(root == NULL) return root;
	else if(number < temp->getNumber()) temp->setLeft(Delete(temp->getLeft(),number));
	else if (number > temp->getNum()) temp->setRight(Delete(temp->getRight(),number));

	else
     {
		// Case 1:  No child
		if(temp->getLeft() == NULL && temp->getRight() == NULL)
		 {
			delete temp ;
			temp = NULL;
		 }
		//Case 2: One child
		else if(temp->getLeft() == NULL)
		 {
			 Node *cur = temp;
			cur = temp->getRight();
			delete temp;
		 }
		else if(temp->getRight() == NULL)
		{
			 Node *temp = root  ;
			temp = temp->getLeft() ;
			delete temp;
		}
		// case 3: 2 children
		else
           {
			 Node *temp = (temp->getRight);
			temp->setData ( temp->getData());
		 	temp->setRight ( Delete(root->getRight(),temp->getNum()));
		    }
     }
	return root;
}
patient search1(Node* temp,int number)
    {
        if (root== NULL)
            cout<<"tree is empty : there is no data "<<endl ;
        else if (temp->getNum() == number)
        {

           print_patient_data(patient p)
{


        }
        else if (number <= temp->getNum())
        return search1(temp->getLeft(),number);
        else
        {
          return search1(temp->getRight() ,number) ;
        }



    }
void Inorder(Node *temp)
    {
	if(root == NULL)
        return;
   else
	  {
	    Inorder(temp->getLeft());       //Visit left subtree
	print_patient_data(patient p)
        Inorder(temp->getRight());
	  }

    }
};


int main()
{ int selection;

cout<<"for insertion enter 1 , for deletion enter 2 , for search enter 3 , for print and save enter 4 , for exit enter 5"<<endl;
cin>>selection ;
switch(selection)
{
case(1):

    Insertion(Node *temp,patient p1)
    patient p1
    {
    cout<<"Enter patient's age "<<endl;
    cin>>p1.age;
    cout<<"Enter patient's name "<<endl;
    cin>>p1.name;
    cout<<"Enter patient's number "<<endl;
    cin>>p1.number;
    cout<<"Enter patient's drugs"<<endl;
    cin>>p1.drugs;
    };
case(2):
       temp = root ;
         cout<<"enter required number"<< endl;
         cin>>number;
         Delete(Node *temp, int number)
case(3):
    temp = root ;
    cout<<"enter required number"<< endl;
    cin>>number;
    search1(Node* root,int number)
case(4):
    temp = root ;
    cout<<"inorder tree:"<<endl;
    Inorder(Node *temp)
case(5):
    exit()





   }
    return 0;
 }

void print_patient_data(patient p)
  {
    cout<<""<<"number:"<<p.number<<" "<<"name:"<<p.name<<endl;
    cout<<""<<"age:"<<p.age<<endl;
    cout<<""<<"list of drugs:"<<p.drugs<<endl;

  }




