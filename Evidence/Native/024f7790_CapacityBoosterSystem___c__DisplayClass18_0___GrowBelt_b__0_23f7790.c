/* IL2CPP: CapacityBoosterSystem.<>c__DisplayClass18_0$$<GrowBelt>b__0
void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__0 (CapacityBoosterSystem___c__DisplayClass18_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CapacityBoosterSystem.<>c__DisplayClass18_0$$<GrowBelt>b__0
   void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__0
   (CapacityBoosterSystem___c__DisplayClass18_0_o* __this, const MethodInfo* method); */

void CapacityBoosterSystem___c__DisplayClass18_0___GrowBelt_b__0_23f7790(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    UnityEngine_ParticleSystem__Stop_3c7ea34(*(long *)(param_1 + 0x10),0);
    puVar1 = PTR_DAT_049b3b98;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x68), lVar2 != 0)) {
      if ((bRam0000000004f4bb5c & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b3b98,0);
        bRam0000000004f4bb5c = 1;
      }
      uVar6 = *(undefined8 *)(lVar2 + 0xd8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
      Conveyor__ClipMesh_24b0468(*(undefined8 *)(lVar2 + 0x170),lVar2);
      lVar4 = Conveyor__get_AutoCount_24b03e4(lVar2);
      if (lVar4 != 0) {
        SplineMeshAutoCount__Refresh_249f608(lVar4,0);
        plVar5 = *(long **)(lVar2 + 0xc0);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          lVar2 = *(long *)(lVar2 + 0xe0);
          if (lVar2 != 0) {
            if ((bRam0000000004f56ee6 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a25b08,0,0);
              bRam0000000004f56ee6 = 1;
            }
            if (lVar2 != 0) {
              lVar4 = *(long *)(lVar2 + 0x10);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
              }
              if (pcRam0000000004f56f70 == (code *)0x0) {
                pcRam0000000004f56f70 = (code *)FUN_021f03bc(&UNK_013d66ae);
              }
                    /* WARNING: Could not recover jumptable at 0x03cdcb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam0000000004f56f70)(lVar4,0);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

