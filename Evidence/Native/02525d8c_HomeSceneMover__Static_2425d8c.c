/* IL2CPP: HomeSceneMover$$Static
HomeScenePathKey_o HomeSceneMover__Static (HomeSceneMover_o* __this, float* distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneMover$$Static
   HomeScenePathKey_o HomeSceneMover__Static (HomeSceneMover_o* __this, float* distance, const
   MethodInfo* method); */

void HomeSceneMover__Static_2425d8c(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 02525bc8 with catch @ 02525d8c
                       catch() { ... } // from try @ 02525d04 with catch @ 02525d8c */
  lVar3 = *(long *)(param_2 + 0x10);
                    /* catch() { ... } // from try @ 02525ccc with catch @ 02525d90
                       catch() { ... } // from try @ 02525d08 with catch @ 02525d90
                       catch() { ... } // from try @ 02525d20 with catch @ 02525d90 */
  *param_3 = 0;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x2c);
    *param_1 = 0;
    uVar2 = _UNK_013a9ca8;
    uVar1 = _UNK_013a9ca0;
    *(undefined8 *)(param_1 + 1) = uVar4;
    *(undefined8 *)(param_1 + 5) = uVar2;
    *(undefined8 *)(param_1 + 3) = uVar1;
                    /* try { // try from 02525db0 to 02625db3 has its CatchHandler @ 02525df4 */
    return;
  }
                    /* try { // try from 02525db4 to 02625df7 has its CatchHandler @ 02525b30 */
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

