¿Qué es el Patrón Facade?

El patrón Facade es un patrón de diseño estructural que proporciona una interfaz simplificada a un conjunto de interfaces en un subsistema. Facilita la interacción con el sistema al ofrecer un único punto de acceso a su funcionalidad.
Aplicación del Patrón Facade en Galaga

En Galaga, un videojuego clásico de arcade, se podría aplicar el patrón Facade para simplificar la interacción con las diversas subsistemas del juego, como la gestión de enemigos, la detección de colisiones, la gestión de jugadores y la actualización del estado del juego.
Subsistemas del Juego:

    Gestión de Enemigos: Creación, movimiento y destrucción de enemigos.
    Detección de Colisiones: Comprobación de colisiones entre jugadores, enemigos y disparos.
    Gestión de Jugadores: Control del movimiento del jugador y disparos.
    Actualización del Estado del Juego: Actualización de puntuaciones, niveles y estado del juego.

Interfaz Facade

La interfaz Facade podría ofrecer métodos como StartGame(), UpdateGame(float DeltaTime), PlayerShoot(), y EnemyShoot() para encapsular la complejidad de las operaciones mencionadas.
Diagrama de Clases

El diagrama de clases incluirá una clase GameFacade que interactúa con clases como EnemyManager, CollisionManager, PlayerManager y GameStateManager.

+-------------------+
|    GameFacade     |
+-------------------+
| - enemyManager    |
| - collisionManager|
| - playerManager   |
| - gameStateManager|
+-------------------+
| + StartGame()     |
| + UpdateGame(dt)  |
| + PlayerShoot()   |
| + EnemyShoot()    |
+-------------------+
           |
           |
 +---------+-----------+----------+----------+
 |         |           |          |          |
 |         |           |          |          |
+------+  +----------+ +---------+ +---------+
|Enemy |  |Collision | |Player   | |GameState|
|Manager|  |Manager   | |Manager  | |Manager  |
+------+  +----------+ +---------+ +---------+
