/* IL2CPP: Conveyor$$GrowMesh
void Conveyor__GrowMesh (Conveyor_o* __this, double percent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Conveyor$$GrowMesh
   void Conveyor__GrowMesh (Conveyor_o* __this, double percent, const MethodInfo* method); */

void Conveyor__GrowMesh_24b04ac(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
                    /* try { // try from 025b04ac to 026b050f has its CatchHandler @ 025b03c8 */
  *(undefined8 *)(param_2 + 0x170) = param_1;
  plVar2 = (long *)Conveyor__GetGrowMesh_24b0588();
  if ((*(long *)(param_2 + 0xc0) != 0) && (plVar2 != (long *)0x0)) {
    uVar6 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0xe8);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b04a0 with catch @ 025b04ec
                        */
    Dreamteck_Splines_SplineUser__SetClipRange_235bcb8(uVar6,param_1,plVar2,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b047c with catch @ 025b04f0
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b0450 with catch @ 025b04f4
                        */
    if (*(long *)(param_2 + 0xb8) != 0) {
      uVar5 = Dreamteck_Splines_SplineComputer__CalculateLength_2349594
                        (uVar6,param_1,*(long *)(param_2 + 0xb8),0);
                    /* try { // try from 025b0510 to 026b0513 has its CatchHandler @ 025b051c */
      lVar3 = Dreamteck_Splines_SplineMesh__GetChannel_234e16c(plVar2,0,0);
                    /* catch() { ... } // from try @ 025b0510 with catch @ 025b051c */
                    /* try { // try from 025b0520 to 026b0527 has its CatchHandler @ 025b0530 */
      lVar4 = Conveyor__get_AutoCount_24b03e4(param_2);
                    /* try { // try from 025b0528 to 026b0533 has its CatchHandler @ 025b03c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b0520 with catch @ 025b0530
                        */
      if ((lVar4 != 0) && (iVar1 = SplineMeshAutoCount__CountFor_249f538(uVar5,lVar4,0), lVar3 != 0)
         ) {
        if (iVar1 < 2) {
          iVar1 = 1;
        }
        Dreamteck_Splines_SplineMesh_Channel__set_count_234eb34(lVar3,iVar1,0);
        (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
        lVar3 = *(long *)(param_2 + 0xe0);
        if (lVar3 != 0) {
          if ((bRam0000000004f56ee6 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a25b08,1,0);
            bRam0000000004f56ee6 = 1;
          }
          if (lVar3 != 0) {
            lVar4 = *(long *)(lVar3 + 0x10);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
            }
            if (pcRam0000000004f56f70 == (code *)0x0) {
              pcRam0000000004f56f70 = (code *)FUN_021f03bc(&UNK_013d66ae);
            }
                    /* WARNING: Could not recover jumptable at 0x03cdcb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004f56f70)(lVar4,1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

