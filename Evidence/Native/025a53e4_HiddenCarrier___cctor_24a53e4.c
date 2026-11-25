/* IL2CPP: HiddenCarrier$$.cctor
void HiddenCarrier___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenCarrier$$.cctor
   void HiddenCarrier___cctor (const MethodInfo* method); */

void HiddenCarrier___cctor_24a53e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_DAT_049c66d0;
  puVar3 = PTR_DAT_049c66c8;
  puVar2 = PTR_DAT_049c66b8;
  puVar1 = PTR_DAT_049c2040;
  if ((bRam0000000004f4bb09 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c66b8);
    FUN_021f03f8(PTR_DAT_049c2040);
    FUN_021f03f8(PTR_DAT_049c66d0);
    FUN_021f03f8(PTR_DAT_049c66c8);
    bRam0000000004f4bb09 = 1;
  }
  uVar5 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar1,0);
  uVar6 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar2 + 0xb8) = uVar5;
  uVar5 = UnityEngine_Animator__StringToHash_3bb2cf0(uVar6,0);
  uVar6 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) = uVar5;
  uVar5 = UnityEngine_Animator__StringToHash_3bb2cf0(uVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = uVar5;
  return;
}

