/* IL2CPP: SandFlowSystem$$IsShown
bool SandFlowSystem__IsShown (Carrier_o* carrier, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$IsShown
   bool SandFlowSystem__IsShown (Carrier_o* carrier, Block_o* block, const MethodInfo* method); */

uint SandFlowSystem__IsShown_24ceef8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_18;
  
  lStack_18 = 0;
  if ((param_2 == 0) ||
     (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), lVar2 == 0)) {
LAB_025cefac:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_2 + 0x138) == 0) goto LAB_025cefac;
    uVar3 = UnityEngine_Renderer__get_enabled_3bdc9fc(*(long *)(param_2 + 0x138),0);
    if ((uVar3 & 1) != 0) {
      uVar1 = 1;
      goto LAB_025cef9c;
    }
  }
  if (param_1 == 0) goto LAB_025cefac;
  uVar3 = Carrier__TryGetGroupBlockOf_23ff3b0(param_1,param_2,&lStack_18,0);
  if ((uVar3 & 1) != 0) {
    if (lStack_18 == 0) goto LAB_025cefac;
    uVar3 = UnityEngine_Renderer__get_enabled_3bdc9fc(lStack_18,0);
    if ((uVar3 & 1) != 0) {
      if ((lStack_18 == 0) ||
         (lVar2 = UnityEngine_Component__get_gameObject_3c187f4(lStack_18,0), lVar2 == 0))
      goto LAB_025cefac;
      uVar1 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar2,0);
      goto LAB_025cef9c;
    }
  }
  uVar1 = 0;
LAB_025cef9c:
  return uVar1 & 1;
}

