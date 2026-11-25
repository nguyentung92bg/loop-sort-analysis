/* IL2CPP: BlockGroupShapeSystem$$CreateCanvas
void BlockGroupShapeSystem__CreateCanvas (BlockGroupShapeSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockGroupShapeSystem$$CreateCanvas
   void BlockGroupShapeSystem__CreateCanvas (BlockGroupShapeSystem_o* __this, const MethodInfo*
   method); */

void BlockGroupShapeSystem__CreateCanvas_23e08b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_049c1608;
  puVar1 = PTR_DAT_049b3b90;
  if ((bRam0000000004f4b5d7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1610);
    FUN_021f03f8(PTR_DAT_049b3b90);
                    /* try { // try from 024e08f4 to 025e091b has its CatchHandler @ 024e0cd4 */
    FUN_021f03f8(PTR_DAT_049c1608);
    bRam0000000004f4b5d7 = 1;
  }
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_3c1db70(lVar4,*(undefined8 *)puVar2,0);
  if (lVar4 != 0) {
    lVar4 = UnityEngine_GameObject__AddComponent_object__261a774
                      (lVar4,*(undefined8 *)PTR_DAT_049c1610);
    plVar5 = (long *)(param_1 + 0x68);
    *plVar5 = lVar4;
    thunk_FUN_021f190c(plVar5,lVar4);
    if (*plVar5 != 0) {
                    /* try { // try from 024e0958 to 025e097f has its CatchHandler @ 024e0cd0 */
      UnityEngine_Canvas__set_renderMode_3ec6d70(*plVar5,2,0);
      if (*plVar5 != 0) {
        UnityEngine_Canvas__set_sortingOrder_3ec788c(*plVar5,0xffffffff,0);
        if (*(long *)(param_1 + 0x58) != 0) {
          lVar4 = *(long *)(param_1 + 0x68);
          uVar3 = SettingsModule__IsColorBlindActive_2539ddc(*(long *)(param_1 + 0x58),0);
                    /* try { // try from 024e0988 to 025e0997 has its CatchHandler @ 024e0cc4 */
          if (lVar4 != 0) {
                    /* try { // try from 024e0998 to 025e09a3 has its CatchHandler @ 024e0cc0 */
            if ((bRam0000000004f5817b & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a266d8,uVar3 & 1,0);
              bRam0000000004f5817b = 1;
            }
            if (lVar4 != 0) {
              lVar6 = *(long *)(lVar4 + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar4,0);
              }
              if (pcRam0000000004f58188 == (code *)0x0) {
                pcRam0000000004f58188 = (code *)FUN_021f03bc(&UNK_013d0ea3);
              }
                    /* WARNING: Could not recover jumptable at 0x03d17f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004f58188)(lVar6,uVar3 & 1);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

