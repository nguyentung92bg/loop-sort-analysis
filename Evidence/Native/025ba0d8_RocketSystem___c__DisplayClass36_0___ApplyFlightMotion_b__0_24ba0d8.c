/* IL2CPP: RocketSystem.<>c__DisplayClass36_0$$<ApplyFlightMotion>b__0
void RocketSystem___c__DisplayClass36_0___ApplyFlightMotion_b__0 (RocketSystem___c__DisplayClass36_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RocketSystem.<>c__DisplayClass36_0$$<ApplyFlightMotion>b__0
   void RocketSystem___c__DisplayClass36_0___ApplyFlightMotion_b__0
   (RocketSystem___c__DisplayClass36_0_o* __this, float x, const MethodInfo* method); */

void RocketSystem___c__DisplayClass36_0___ApplyFlightMotion_b__0_24ba0d8(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    fVar3 = (float)UnityEngine_AnimationCurve__Evaluate_3bc62c8(lVar1,0);
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar5 = 0.0;
    if (0.0 <= fVar3) {
      fVar5 = fVar4;
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar1 != 0)) {
      fVar3 = *(float *)(lVar1 + 0x30);
      lVar1 = *(long *)(param_1 + 0x18);
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar5;
      }
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if (lVar1 != 0) {
        fVar3 = 1.0 / fVar3;
        lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        fVar4 = 1.0 / (fVar3 + fVar4 * (1.0 - fVar3));
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (fVar4 * *(float *)(lVar2 + 0xc),fVar4 * *(float *)(lVar2 + 0x10),
                   fVar4 * *(float *)(lVar2 + 0x14),lVar1,0);
        lVar1 = *(long *)(param_1 + 0x18);
        if (lVar1 != 0) {
          fVar7 = *(float *)(param_1 + 0x24);
          fVar8 = *(float *)(param_1 + 0x28);
          fVar5 = (float)RocketSystem__GetFlightPoint_24b9f64
                                   (*(undefined4 *)(param_1 + 0x20),fVar7,fVar8,
                                    *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                                    *(undefined4 *)(param_1 + 0x34));
          fVar4 = fVar7;
          fVar3 = fVar8;
          fVar6 = (float)UnityEngine_Transform__get_position_3c2d540(lVar1,0);
          if (_UNK_013aa94c <
              (fVar8 - fVar3) * (fVar8 - fVar3) +
              (fVar5 - fVar6) * (fVar5 - fVar6) + (fVar7 - fVar4) * (fVar7 - fVar4)) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_025ba27c;
            UnityEngine_Transform__set_forward_3c2dbf4(*(long *)(param_1 + 0x18),0);
          }
          lVar1 = *(long *)(param_1 + 0x18);
          if (lVar1 != 0) {
            if ((bRam0000000004f58a09 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a26ad0,0);
              bRam0000000004f58a09 = 1;
            }
            if (lVar1 != 0) {
              lVar2 = *(long *)(lVar1 + 0x10);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
              }
              if (pcRam0000000004f58a38 == (code *)0x0) {
                pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
              }
              (*pcRam0000000004f58a38)(lVar2,&stack0xffffffffffffffd4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
LAB_025ba27c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

