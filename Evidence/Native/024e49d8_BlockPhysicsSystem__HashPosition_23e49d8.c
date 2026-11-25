/* IL2CPP: BlockPhysicsSystem$$HashPosition
int64_t BlockPhysicsSystem__HashPosition (BlockPhysicsSystem_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BlockPhysicsSystem$$HashPosition
   int64_t BlockPhysicsSystem__HashPosition (BlockPhysicsSystem_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

ulong BlockPhysicsSystem__HashPosition_23e49d8
                (float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  float fVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  float fVar17;
  
                    /* try { // try from 024e49f0 to 025e4a17 has its CatchHandler @ 024e4e18 */
  fVar9 = *(float *)(param_4 + 0x98);
  if (cRam0000000004f49d58 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f49d58 = '\x01';
  }
  puVar3 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
    uVar2 = *(undefined4 *)(param_4 + 0x98);
    uVar13 = (undefined1)uVar2;
    uVar14 = (undefined1)((uint)uVar2 >> 8);
    uVar15 = (undefined1)((uint)uVar2 >> 0x10);
    uVar16 = (undefined1)((uint)uVar2 >> 0x18);
    if (cRam0000000004f49d58 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
                    /* try { // try from 024e4a60 to 025e4a87 has its CatchHandler @ 024e4e54 */
      cRam0000000004f49d58 = '\x01';
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0x98);
    uVar13 = (undefined1)uVar2;
    uVar14 = (undefined1)((uint)uVar2 >> 8);
    uVar15 = (undefined1)((uint)uVar2 >> 0x10);
    uVar16 = (undefined1)((uint)uVar2 >> 0x18);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
    fVar17 = *(float *)(param_4 + 0x98);
    if (cRam0000000004f49d58 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f49d58 = '\x01';
    }
  }
  else {
    fVar17 = *(float *)(param_4 + 0x98);
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* try { // try from 024e4ac4 to 025e4aef has its CatchHandler @ 024e4e50 */
  fVar4 = (float)(int)(param_2 / (float)CONCAT13(uVar16,CONCAT12(uVar15,CONCAT11(uVar14,uVar13))));
  fVar9 = (float)(int)(param_1 / fVar9);
                    /* try { // try from 024e4af4 to 025e4aff has its CatchHandler @ 024e4e48 */
  uVar10 = (uint)fVar4;
  iVar5 = -(uint)(fVar4 == INFINITY);
  iVar7 = -(uint)(fVar9 == INFINITY);
  auVar12[8] = UNK_013a9298;
  auVar12._0_8_ = _UNK_013a9290;
                    /* try { // try from 024e4b08 to 025e4b0b has its CatchHandler @ 024e4e4c */
  auVar11._0_8_ = (ulong)uVar10 & 0x1fffff;
  auVar11._8_8_ = (CONCAT44((int)fVar9,uVar10) & 0x1fffff001fffff) >> 0x20;
  auVar12[9] = (char)_UNK_013a9299;
  auVar12[10] = (char)((uint7)_UNK_013a9299 >> 8);
  auVar12[0xb] = (char)((uint7)_UNK_013a9299 >> 0x10);
  auVar12[0xc] = (char)((uint7)_UNK_013a9299 >> 0x18);
  auVar12[0xd] = (char)((uint7)_UNK_013a9299 >> 0x20);
  auVar12[0xe] = (char)((uint7)_UNK_013a9299 >> 0x28);
  auVar12[0xf] = (char)((uint7)_UNK_013a9299 >> 0x30);
  auVar12 = NEON_ushl(auVar11,auVar12,8);
  bVar6 = (byte)(iVar5 >> 0x1f);
  bVar8 = (byte)(iVar7 >> 0x1f);
  uVar1 = 0;
  if ((float)(int)(param_3 / fVar17) != INFINITY) {
    uVar1 = (ulong)((int)(param_3 / fVar17) & 0x1fffff);
  }
  return CONCAT17(auVar12[7] & ~bVar6 | auVar12[0xf] & ~bVar8,
                  CONCAT16(auVar12[6] & ~bVar6 | auVar12[0xe] & ~bVar8,
                           CONCAT15(auVar12[5] & ~bVar6 | auVar12[0xd] & ~bVar8,
                                    CONCAT14(auVar12[4] & ~bVar6 | auVar12[0xc] & ~bVar8,
                                             CONCAT13(auVar12[3] & ~(byte)((uint)iVar5 >> 0x18) |
                                                      auVar12[0xb] & ~(byte)((uint)iVar7 >> 0x18),
                                                      CONCAT12(auVar12[2] &
                                                               ~(byte)((uint)iVar5 >> 0x10) |
                                                               auVar12[10] &
                                                               ~(byte)((uint)iVar7 >> 0x10),
                                                               CONCAT11(auVar12[1] &
                                                                        ~(byte)((uint)iVar5 >> 8) |
                                                                        auVar12[9] &
                                                                        ~(byte)((uint)iVar7 >> 8),
                                                                        auVar12[0] & ~(byte)iVar5 |
                                                                        auVar12[8] & ~(byte)iVar7)))
                                            )))) | uVar1;
}

