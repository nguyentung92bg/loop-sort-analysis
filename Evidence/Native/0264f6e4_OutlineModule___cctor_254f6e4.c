/* IL2CPP: OutlineModule$$.cctor
void OutlineModule___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$.cctor
   void OutlineModule___cctor (const MethodInfo* method); */

void OutlineModule___cctor_254f6e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  puVar5 = PTR_DAT_049cac70;
  puVar4 = PTR_DAT_049cac68;
  puVar3 = PTR_DAT_049cac60;
  puVar2 = PTR_DAT_049cac58;
  puVar1 = PTR_DAT_049cabb0;
  if ((bRam0000000004f4c06b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cabb0);
    FUN_021f03f8(PTR_DAT_049cac68);
    FUN_021f03f8(PTR_DAT_049cac60);
    FUN_021f03f8(PTR_DAT_049cac70);
    FUN_021f03f8(PTR_DAT_049cac58);
    bRam0000000004f4c06b = 1;
  }
  uVar6 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar2,0);
  uVar7 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar6;
  uVar6 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar7,0);
  uVar7 = *(undefined8 *)puVar4;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar6;
  uVar6 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar7,0);
  uVar7 = *(undefined8 *)puVar5;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar6;
  uVar6 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar6;
  return;
}

