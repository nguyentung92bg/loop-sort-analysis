/* IL2CPP: TwinkleEffect$$OnDisable
void TwinkleEffect__OnDisable (TwinkleEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TwinkleEffect$$OnDisable
   void TwinkleEffect__OnDisable (TwinkleEffect_o* __this, const MethodInfo* method); */

void TwinkleEffect__OnDisable_2412288(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_049bbf90;
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar5) {
        return;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar5) {
LAB_02512374:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      lVar6 = (long)(int)uVar5;
      lVar2 = *(long *)(lVar2 + lVar6 * 8 + 0x20);
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(puVar1);
        cRam0000000004f4a233 = '\x01';
      }
      if (lVar2 == 0) break;
      puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
      UnityEngine_Transform__set_localScale_3c2ddfc(*puVar3,puVar3[1],puVar3[2],lVar2,0);
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar2 == 0) break;
      if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_02512374;
      lVar4 = *(long *)(param_1 + 0x50);
      *(undefined4 *)(lVar2 + lVar6 * 4 + 0x20) = 0xbf800000;
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_02512374;
      lVar2 = *(long *)(param_1 + 0x40);
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + lVar6 * 4 + 0x20) = 0xbf800000;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

