/* IL2CPP: SystemBase$$OnAwake
void SystemBase__OnAwake (SystemBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SystemBase$$OnAwake
   void SystemBase__OnAwake (SystemBase_o* __this, const MethodInfo* method); */

void SystemBase__OnAwake_2555e24(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
                    /* catch() { ... } // from try @ 02655ddc with catch @ 02655e24 */
  puVar1 = PTR_DAT_049b5228;
                    /* catch() { ... } // from try @ 02655bb8 with catch @ 02655e28 */
                    /* catch() { ... } // from try @ 02655bc0 with catch @ 02655e2c */
                    /* catch() { ... } // from try @ 02655b98 with catch @ 02655e30 */
                    /* catch() { ... } // from try @ 02655e1c with catch @ 02655e34 */
                    /* catch() { ... } // from try @ 02655cc0 with catch @ 02655e38 */
                    /* catch() { ... } // from try @ 02655be0 with catch @ 02655e3c */
  if ((bRam0000000004f4c0a7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb158);
    FUN_021f03f8(PTR_DAT_049b5228);
                    /* try { // try from 02655e5c to 02755e5f has its CatchHandler @ 02655e6c */
    bRam0000000004f4c0a7 = 1;
  }
  puVar2 = PTR_DAT_049cb158;
                    /* catch() { ... } // from try @ 02655e5c with catch @ 02655e6c */
                    /* try { // try from 02655e74 to 02755e7b has its CatchHandler @ 02655f24 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 02655e7c to 02755e9b has its CatchHandler @ 02655b20 */
                    /* catch() { ... } // from try @ 02655d68 with catch @ 02655e80
                       catch() { ... } // from try @ 02655e10 with catch @ 02655e80 */
  LifetimeScopeH__InjectIfNotScoped_object__26545b0(param_1,*(undefined8 *)puVar2);
  if (param_1[2] != 0) {
    lVar3 = SceneModule__get_SceneLoadToken_25389e0(param_1[2],0);
                    /* try { // try from 02655e9c to 02755eb3 has its CatchHandler @ 02655f14 */
    param_1[4] = lVar3;
    thunk_FUN_021f190c(param_1 + 4,0);
    lVar3 = MessagePipe_DisposableBag__CreateBuilder_2f2c100(0);
                    /* try { // try from 02655eb4 to 02755f03 has its CatchHandler @ 02655b20 */
    (**(code **)(*param_1 + 0x1f8))(param_1,lVar3,*(undefined8 *)(*param_1 + 0x200));
    if (lVar3 != 0) {
      lVar3 = MessagePipe_DisposableBagBuilder__Build_2f2dd30(lVar3,0);
      param_1 = param_1 + 5;
      *param_1 = lVar3;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)param_1 >> 0xc & 0x3f),
                     ((ulong)param_1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

