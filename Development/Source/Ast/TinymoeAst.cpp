#include "TinymoeAst.h"

namespace tinymoe
{
	namespace ast
	{
		/*************************************************************
		AstNode
		*************************************************************/

		AstNode::AstNode()
		{
		}

		AstNode::~AstNode()
		{
		}

		string_t AstNode::Indent(int indentation)
		{
			string_t s;
			for (int i = 0; i < indentation; i++)
			{
				s += T("    ");
			}
			return s;
		}

		void AstNode::Print(ostream_t& o, int indentation, AstNode::WeakPtr _parent)
		{
			ASSERT(_parent.expired() || parent.lock() == _parent.lock());
			PrintInternal(o, indentation);
		}

		void AstNode::SetParent(AstNode::WeakPtr _parent)
		{
			ASSERT(parent.expired());
			parent = _parent;
			SetParentInternal();
		}

		/*************************************************************
		Visitor
		*************************************************************/

		AstTypeVisitor::AstTypeVisitor()
		{
		}

		AstTypeVisitor::~AstTypeVisitor()
		{
		}

		AstExpressionVisitor::AstExpressionVisitor()
		{
		}

		AstExpressionVisitor::~AstExpressionVisitor()
		{
		}

		AstStatementVisitor::AstStatementVisitor()
		{
		}

		AstStatementVisitor::~AstStatementVisitor()
		{
		}

		AstDeclarationVisitor::AstDeclarationVisitor()
		{
		}

		AstDeclarationVisitor::~AstDeclarationVisitor()
		{
		}

		/*************************************************************
		Type
		*************************************************************/

		void AstPredefinedType::Accept(AstTypeVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstReferenceType::Accept(AstTypeVisitor* visitor)
		{
			visitor->Visit(this);
		}

		/*************************************************************
		Expression
		*************************************************************/

		void AstLiteralExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstIntegerExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstFloatExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstStringExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstExternalSymbolExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstReferenceExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstNewTypeExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstTestTypeExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstNewArrayExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstNewArrayLiteralExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstArrayLengthExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstArrayAccessExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstFieldAccessExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstInvokeExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstLambdaExpression::Accept(AstExpressionVisitor* visitor)
		{
			visitor->Visit(this);
		}

		/*************************************************************
		Statement
		*************************************************************/

		void AstBlockStatement::Accept(AstStatementVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstExpressionStatement::Accept(AstStatementVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstDeclarationStatement::Accept(AstStatementVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstAssignmentStatement::Accept(AstStatementVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstIfStatement::Accept(AstStatementVisitor* visitor)
		{
			visitor->Visit(this);
		}

		/*************************************************************
		Declaration
		*************************************************************/

		void AstSymbolDeclaration::Accept(AstDeclarationVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstTypeDeclaration::Accept(AstDeclarationVisitor* visitor)
		{
			visitor->Visit(this);
		}

		void AstFunctionDeclaration::Accept(AstDeclarationVisitor* visitor)
		{
			visitor->Visit(this);
		}

	}
}