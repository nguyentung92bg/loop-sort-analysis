/* IL2CPP: RocketSystem$$GetApexPoint
UnityEngine_Vector3_o RocketSystem__GetApexPoint (RocketSystem_o* __this, UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$GetApexPoint
   UnityEngine_Vector3_o RocketSystem__GetApexPoint (RocketSystem_o* __this, UnityEngine_Vector3_o
   from, UnityEngine_Vector3_o to, const MethodInfo* method); */

undefined4 RocketSystem__GetApexPoint_24b99ec(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 in_s3;
  undefined4 in_s4;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    UnityEngine_Camera__WorldToViewportPoint_3bce924(*(long *)(param_1 + 0x30),0);
                    /* try { // try from 025b9a1c to 026b9a1f has its CatchHandler @ 025b9a40 */
                    /* try { // try from 025b9a20 to 026b9a23 has its CatchHandler @ 025b9a38 */
                    /* try { // try from 025b9a24 to 026b9a27 has its CatchHandler @ 025b9a30 */
                    /* try { // try from 025b9a28 to 026b9a5f has its CatchHandler @ 025b97d8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b9a24 with catch @ 025b9a30
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b98b0 with catch @ 025b9a34
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b9a20 with catch @ 025b9a38
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b98a0 with catch @ 025b9a3c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b9a1c with catch @ 025b9a40
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b98d0 with catch @ 025b9a44
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b9960 with catch @ 025b9a44
                        */
    if (((*(long *)(param_1 + 0x30) != 0) &&
        (UnityEngine_Camera__WorldToViewportPoint_3bce924(in_s3,in_s4,*(long *)(param_1 + 0x30),0),
        *(long *)(param_1 + 0x40) != 0)) && (lVar1 = *(long *)(param_1 + 0x30), lVar1 != 0)) {
      if ((bRam0000000004f56886 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a25808,2);
        bRam0000000004f56886 = 1;
      }
      uStack_38 = 0;
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f56ae0 == (code *)0x0) {
          pcRam0000000004f56ae0 = (code *)FUN_021f03bc(&UNK_013e010d);
        }
        (*pcRam0000000004f56ae0)(lVar2,&stack0xffffffffffffffd4,2,&uStack_38);
        return (undefined4)uStack_38;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

