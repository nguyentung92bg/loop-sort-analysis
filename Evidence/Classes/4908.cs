// Namespace: 
public interface IDragInteractable : IInteractable // TypeDefIndex: 4908
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CanStartInteract(LeanFinger finger, RaycastHit hitInfo);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void UpdateInteraction(LeanFinger finger);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void CompleteInteract(LeanFinger finger);
}

