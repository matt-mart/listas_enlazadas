#include <iostream>
#include "./lib/node.hpp"
#include "./lib/queue.hpp"
#include "./lib/delete_queue.hpp"
#include "./lib/create_queue_recursive.hpp"
#include "./lib/mostrar_queue.hpp"


using namespace std;

int main()
{
  int largo = 10;
  QUEUE queue;
  Create_Queue_Recursive( &queue , largo );
  Mostrar_Queue( queue );
  Delete_Queue( &queue );
}
