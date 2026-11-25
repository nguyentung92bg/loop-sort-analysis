/* IL2CPP: Carrier$$GetBlocksInLayer
void Carrier__GetBlocksInLayer (Carrier_o* __this, int32_t z, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$GetBlocksInLayer
   void Carrier__GetBlocksInLayer (Carrier_o* __this, int32_t z,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void Carrier__GetBlocksInLayer_24093ac(undefined8 param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [12];
  
  if ((bRam0000000004f4b6d8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b6d8 = 1;
  }
  auVar8 = Carrier__get_BlockSize_240813c(param_1);
  puVar2 = PTR_DAT_049c1c80;
  puVar1 = PTR_DAT_049b3b98;
  if (((-1 < param_2) && (param_2 < auVar8._8_4_)) && (0 < auVar8._0_4_)) {
    uVar6 = 0;
    do {
      uVar5 = uVar6;
      uVar7 = auVar8._0_8_ >> 0x20;
      if (0 < auVar8._4_4_) {
        do {
          uVar3 = Carrier__GetBlockAt_2408ee0(param_1,uVar5,param_2);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574(*(long *)puVar1);
          }
          uVar4 = UnityEngine_Object__op_Inequality_3c1b96c(uVar3,0,0);
          if ((uVar4 & 1) != 0) {
            if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_02333498(param_3,uVar3,*(undefined8 *)puVar2);
          }
          uVar7 = uVar7 - 1;
          uVar5 = uVar5 + 0x100000000;
        } while (uVar7 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (auVar8._0_8_ & 0xffffffff));
  }
  return;
}

