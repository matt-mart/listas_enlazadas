#include <iostream>
#include "./lib/nodo.hpp"
#include "./lib/queue.hpp"
#include "./lib/delete_queue.hpp"
#include "./lib/create_queue_recursive.hpp"
#include "./lib/mostrar_queues.hpp"


using namespace std;

int main()
{
  int largo = 10;
  QUEUE queue;
  Create_Queue_Recursive( &queue , largo );
  Mostrar_Queues( queue );
  Delete_Queue( &queue );
}
