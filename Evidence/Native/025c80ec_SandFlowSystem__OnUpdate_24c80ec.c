/* IL2CPP: SandFlowSystem$$OnUpdate
void SandFlowSystem__OnUpdate (SandFlowSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$OnUpdate
   void SandFlowSystem__OnUpdate (SandFlowSystem_o* __this, float deltaTime, const MethodInfo*
   method); */

void SandFlowSystem__OnUpdate_24c80ec(undefined4 param_1,long param_2)

{
  SystemBase__OnUpdate_2555ef8(param_2,0);
  if (*(char *)(param_2 + 0x2c0) != '\0') {
    SandFlowSystem__Step_24c81d4(param_1,param_2);
  }
  return;
}

