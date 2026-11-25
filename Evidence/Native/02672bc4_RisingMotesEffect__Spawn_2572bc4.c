/* IL2CPP: RisingMotesEffect$$Spawn
void RisingMotesEffect__Spawn (RisingMotesEffect_o* __this, int32_t index, float bornTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RisingMotesEffect$$Spawn
   void RisingMotesEffect__Spawn (RisingMotesEffect_o* __this, int32_t index, float bornTime, const
   MethodInfo* method); */

void RisingMotesEffect__Spawn_2572bc4
               (undefined4 param_1,float param_2,float param_3,float param_4,long param_5,
               uint param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(long *)(param_5 + 0x40) != 0) {
    fVar4 = (float)UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x40),0);
    lVar1 = *(long *)(param_5 + 0x50);
    if (lVar1 != 0) {
      if (*(uint *)(lVar1 + 0x18) <= param_6) {
LAB_02672d38:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar2 = (long)(int)param_6;
      lVar3 = *(long *)(param_5 + 0x58);
      *(undefined4 *)(lVar1 + lVar2 * 4 + 0x20) = param_1;
      uVar5 = UnityEngine_Random__Range_3c11c54
                        (*(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x2c),0);
      if (lVar3 != 0) {
        if (*(uint *)(lVar3 + 0x18) <= param_6) goto LAB_02672d38;
        lVar1 = *(long *)(param_5 + 0x60);
        *(undefined4 *)(lVar3 + lVar2 * 4 + 0x20) = uVar5;
        uVar5 = UnityEngine_Random__Range_3c11c54(fVar4,param_3 + fVar4,0);
        uVar6 = UnityEngine_Random__Range_3c11c54(param_2,param_2 + param_4 * 0.5,0);
        if (lVar1 != 0) {
          if (*(uint *)(lVar1 + 0x18) <= param_6) goto LAB_02672d38;
          lVar1 = lVar1 + lVar2 * 8;
          *(undefined4 *)(lVar1 + 0x20) = uVar5;
          *(undefined4 *)(lVar1 + 0x24) = uVar6;
          lVar1 = *(long *)(param_5 + 0x48);
          if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x18) <= param_6) goto LAB_02672d38;
            lVar1 = *(long *)(lVar1 + lVar2 * 8 + 0x20);
            if (lVar1 != 0) {
              lVar1 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar1,0);
              if (cRam0000000004f4a194 == '\0') {
                FUN_021f03f8(PTR_DAT_049b8a18);
                cRam0000000004f4a194 = '\x01';
              }
              UnityEngine_Random__Range_3c11c54
                        (*(undefined4 *)(param_5 + 0x38),*(undefined4 *)(param_5 + 0x3c),0);
              if (lVar1 != 0) {
                if ((bRam0000000004f58962 & 1) == 0) {
                  FUN_021f03f8(PTR_DAT_04a26c78,0);
                  bRam0000000004f58962 = 1;
                }
                if (lVar1 != 0) {
                  lVar2 = *(long *)(lVar1 + 0x10);
                  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
                  }
                  if (pcRam0000000004f589b8 == (code *)0x0) {
                    pcRam0000000004f589b8 = (code *)FUN_021f03bc(&UNK_013d4c25);
                  }
                  (*pcRam0000000004f589b8)(lVar2,&stack0xffffffffffffffe8);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

