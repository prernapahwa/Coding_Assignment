/*
 * Implementing stack
 * using Array (non dynamic)
 *
 * @Prerna(1910990964)
 *
 */

#include<stdio.h>

//Global variables
#define MAX_SIZE 10
int stack[MAX_SIZE];
int top = -1; // top -1 represents stack is empty


//Adds new element to stack
void push(int value){
    if(top >= MAX_SIZE-1) {
        printf("Overflow\n");
        return ;
    }
    top++;
    //printf("t = %d\n",top);
    stack[top] = value; // increases top and add value at that index in array
}


//Returns the top
int peek() {
    return top;
}


//Return 1 if stack is empty
int is_empty() {
    if(top == -1) {
        return 1;
    }
    return 0;
}

//Remove and retun the element from the stack
int pop() {
    if(is_empty()) {
        printf("underflow\n");
        return top;
    }
    return stack[top--];
}

void print_stack() {
    printf("stack : ");
    for(int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    printf("\n");
}



int main() {
    push(1);
    print_stack();
    push(1);
    print_stack();
    push(2);
    print_stack();
    push(3);
    print_stack();
    push(5);
    print_stack();
    push(8);
    print_stack();
    push(13);
    print_stack();
    push(21);
    print_stack();
    push(34);
    print_stack();
    push(55);
    print_stack();
    push(89);// 11th element
    print_stack();
    //printf("TOP=%d",top);
    pop();
    pop();
    print_stack();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();//11th time poping;
    print_stack();
    printf("top = %d",peek());
    return 0;

}

/*Time Complexities for 
	push | O(1)
	pop  | O(1)
	peek | O(1)
    is_empty | O(1)	
*Space Complexity for 'n' push operations is O(n)

*/
