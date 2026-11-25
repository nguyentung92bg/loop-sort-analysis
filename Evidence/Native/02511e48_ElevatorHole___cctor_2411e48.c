/* IL2CPP: ElevatorHole$$.cctor
void ElevatorHole___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole$$.cctor
   void ElevatorHole___cctor (const MethodInfo* method); */

void ElevatorHole___cctor_2411e48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  puVar4 = PTR_DAT_049c2b90;
  puVar3 = PTR_DAT_049c2b88;
  puVar2 = PTR_DAT_049c2b80;
  puVar1 = PTR_DAT_049c2b40;
  if ((bRam0000000004f4b728 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2b40);
    FUN_021f03f8(PTR_DAT_049c2b80);
    FUN_021f03f8(PTR_DAT_049c2b88);
    FUN_021f03f8(PTR_DAT_049c2b90);
    bRam0000000004f4b728 = 1;
  }
  uVar5 = UnityEngine_Shader__PropertyToID_3be0c1c(*(undefined8 *)puVar2,0);
  uVar6 = *(undefined8 *)puVar3;
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar5;
  uVar5 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar6,0);
                    /* try { // try from 02511ee8 to 02611eef has its CatchHandler @ 02511fd8 */
  uVar6 = *(undefined8 *)puVar4;
                    /* try { // try from 02511ef0 to 02611fef has its CatchHandler @ 02511c44 */
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar5;
  uVar5 = UnityEngine_Shader__PropertyToID_3be0c1c(uVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar5;
  return;
}

