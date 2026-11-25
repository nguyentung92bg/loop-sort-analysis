/* IL2CPP: ElevatorHole$$Park
void ElevatorHole__Park (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$Park
   void ElevatorHole__Park (ElevatorHole_o* __this, Carrier_o* carrier, const MethodInfo* method);
    */

void ElevatorHole__Park_2410bac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (param_2 != 0) {
    lVar1 = UnityEngine_Component__get_transform_3c18724(param_2,0);
    uVar5 = *(undefined8 *)(param_1 + 0xfc);
    fVar6 = *(float *)(param_1 + 0x104);
    if (cRam0000000004f4a68f == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a68f = '\x01';
    }
    if (lVar1 != 0) {
      fVar3 = *(float *)(param_1 + 0xb8) + 5.0;
      uVar4 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x24);
      UnityEngine_Transform__set_position_3c2d61c
                ((float)uVar5 + (float)uVar4 * fVar3,
                 (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar4 >> 0x20) * fVar3,
                 fVar6 + *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x2c) * fVar3,
                 lVar1,0);
      if (cRam0000000004f4a190 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a190 = '\x01';
      }
      if ((bRam0000000004f58a11 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a11 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f58a78 == (code *)0x0) {
          pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
        }
        (*pcRam0000000004f58a78)(lVar2,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

