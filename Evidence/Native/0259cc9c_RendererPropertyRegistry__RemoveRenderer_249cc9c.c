/* IL2CPP: RendererPropertyRegistry$$RemoveRenderer
void RendererPropertyRegistry__RemoveRenderer (RendererPropertyRegistry_o* __this, UnityEngine_Renderer_o* r, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RendererPropertyRegistry$$RemoveRenderer
   void RendererPropertyRegistry__RemoveRenderer (RendererPropertyRegistry_o* __this,
   UnityEngine_Renderer_o* r, const MethodInfo* method); */

uint RendererPropertyRegistry__RemoveRenderer_249cc9c(long param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bac3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c63f0);
    bRam0000000004f4bac3 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar6 = *(long *)PTR_DAT_049c63f0;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  lVar12 = *(long *)(*(long *)(lVar6 + 0x20) + 0xc0);
  lVar7 = *(long *)(lVar12 + 0x48);
  uVar9 = (ulong)*(uint *)(lVar7 + 0xfc);
  uVar8 = uVar9 + 0xf & 0x1fffffff0;
  plVar11 = (long *)((long)&pppuStack_70 - uVar8);
  lVar10 = (long)plVar11 - uVar8;
  iVar2 = *(int *)(lVar7 + 0x28);
  ppppuVar1 = param_2;
  if (-1 < iVar2) {
    ppppuVar1 = &pppuStack_70;
  }
  pppuStack_70 = param_2;
  func_0x04608620(plVar11,ppppuVar1,uVar9);
  if (iVar2 < 0) {
    func_0x04608620(lVar10,ppppuVar1,uVar9);
  }
  else {
    lVar10 = *plVar11;
  }
  uVar4 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                    (lVar5,lVar10,*(undefined8 *)(lVar12 + 0xd0));
  if (-1 < (int)uVar4) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveAt_28d0654
              (lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x178));
  }
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return ~uVar4 >> 0x1f;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

