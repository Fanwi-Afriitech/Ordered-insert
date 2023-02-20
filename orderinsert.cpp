#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class student{
	private:
		int score [5];
	public:
		void orderedinsert(){
			int i,j,k,var;
			bool t;
			cout<<"Enter a num \n";
		
			for( i=0;i<5;i++)
			{
					cin>>var;
				for(j=0;j<5;j++)
					{
						if(var<score[j]){
							t=true;
							break;
						}
					}
				for(int l=0;l<5;l++){
					if(var>score[l]){
					score[i]=var;
				}
				}
				
				if(t==true){
				for(k=4;k>j;k--){
					score[k]=score[k-1];
					score[k-1]=var;
				}	
				}
				
		}
	}
		
		void display(){
			for(int i=0;i<5;i++){
				cout<<score[i]<<",";
			}
		}
};
int main() {
	student s1;
	
	s1.orderedinsert();
	s1.display();
}