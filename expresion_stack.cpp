#include <iostream>

struct Node
{
    char data;
    Node *next;
};

Node *top;

Node *createNode(char value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void push(char value)
{
    Node *node = createNode(value);
    if (top == NULL)
    {
        top = node;
        return;
    }

    node->next = top;
    top = node;
}

void pop()
{
    if (top == NULL)
    {
        return;
    }
    Node *temp = top;
    top = top->next;
    delete (temp);
}

void print(Node *node)
{
    if (node == NULL)
        return;
    std::cout << node->data << std::endl;
    print(node->next);
}

bool isBalanceExpersion(const char *exp, int length)
{
    for (int i = 0; i < length; i++)
    {
        char c = exp[i];
        if (c == '(' || c == '{' || c == '[')
        {
            push(c);
        }
        else
        {
            if (top == NULL)
            {
                return false;
            }
            else
            {
                char topValue = top->data;
                bool isPaired = false;
                switch (topValue)
                {
                case '(':
                    isPaired = c == ')';
                    break;
                case '[':
                    isPaired = c == ']';
                    break;
                case '{':
                    isPaired = c == '}';
                    break;
                default:
                    isPaired = false;
                    break;
                }
                if (isPaired) {
                    pop();
                }
            }
        }
    }
    return top == NULL;
}

int main(int argc, const char *argv[])
{
    const char* str = "[{}]";
    std::cout<< isBalanceExpersion(str, 4) << std:: endl;
    print(top);
    return 0;
}