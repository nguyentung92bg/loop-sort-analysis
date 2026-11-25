/* IL2CPP: HiddenBlock$$OnRent
void HiddenBlock__OnRent (HiddenBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlock$$OnRent
   void HiddenBlock__OnRent (HiddenBlock_o* __this, const MethodInfo* method); */

void HiddenBlock__OnRent_23e9ba0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long alStack_38 [2];
  
  puVar1 = PTR_DAT_049c1c90;
  if ((bRam0000000004f4b614 & 1) == 0) {
                    /* try { // try from 024e9bc4 to 025e9bcf has its CatchHandler @ 024e9c18 */
    FUN_021f03f8(PTR_DAT_049c1c90);
    bRam0000000004f4b614 = 1;
  }
                    /* try { // try from 024e9bd8 to 025e9bdb has its CatchHandler @ 024e9c08 */
  GameBehaviourBase__OnRent_24f6c1c(param_1,0);
  lVar5 = *(long *)puVar1;
                    /* try { // try from 024e9be4 to 025e9be7 has its CatchHandler @ 024e9c1c */
                    /* try { // try from 024e9be8 to 025e9beb has its CatchHandler @ 024e9c10 */
  *(undefined1 *)(param_1 + 0xb8) = 0;
                    /* try { // try from 024e9bec to 025e9bef has its CatchHandler @ 024e9c0c */
                    /* try { // try from 024e9bf0 to 025e9bf3 has its CatchHandler @ 024e9c04 */
                    /* try { // try from 024e9bf4 to 025e9bf7 has its CatchHandler @ 024e9c14 */
  if (*(long *)(lVar5 + 0x38) == 0) {
    FUN_02229774(lVar5);
  }
  alStack_38[0] = 0;
  uVar2 = Scellecs_Morpeh_WorldExtensions__IsNullOrDisposed_32bd5a8
                    (*(undefined8 *)(param_1 + 0x80),0);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_024f5544(*(undefined8 *)(param_1 + 0x80),**(undefined8 **)(lVar5 + 0x38));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar2 = FUN_024f5708(lVar3,*(undefined8 *)(param_1 + 0x60),
                         *(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x10));
    if ((uVar2 & 1) == 0) {
      alStack_38[0] = 0;
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718(lVar7);
      }
      lVar4 = thunk_FUN_0222c938(param_1,lVar7);
      if (lVar4 != 0) {
        lVar7 = *(long *)(*(long *)(lVar5 + 0x38) + 0x20);
        alStack_38[0] = lVar4;
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_02229718(lVar7);
        }
        lVar4 = thunk_FUN_0222c938(param_1,lVar7);
        if (lVar4 != 0) {
          thunk_FUN_021f190c(alStack_38,lVar4);
          FUN_02735a04(lVar3,uVar6,alStack_38,*(undefined8 *)(*(long *)(lVar5 + 0x38) + 0x28));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(param_1,lVar7);
    }
  }
  return;
}

