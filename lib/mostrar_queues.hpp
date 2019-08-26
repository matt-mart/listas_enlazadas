void Mostrar_Queues( QUEUE queue ){

  for (NODO* nodo = queue.raiz; nodo != nullptr; nodo=nodo->proximo)
    std::cout << nodo->valor << std::endl;


}

