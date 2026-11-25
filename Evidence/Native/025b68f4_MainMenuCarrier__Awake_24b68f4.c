/* IL2CPP: MainMenuCarrier$$Awake
void MainMenuCarrier__Awake (MainMenuCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MainMenuCarrier$$Awake
   void MainMenuCarrier__Awake (MainMenuCarrier_o* __this, const MethodInfo* method); */

void MainMenuCarrier__Awake_24b68f4(undefined8 param_1)

{
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
                    /* try { // try from 025b6908 to 026b690f has its CatchHandler @ 025b69d4 */
  GameBehaviourBase__Awake_24f68a8(param_1,0);
  auStack_14[0] = MainMenuCarrier__HandleAnimation_24b6930(param_1);
                    /* try { // try from 025b6914 to 026b691b has its CatchHandler @ 025b69c8 */
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
  return;
}

